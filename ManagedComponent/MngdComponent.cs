using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Text;
using Navitar;

namespace ManagedComponent
{
    public class MngdComponent
    {      
        public int Value { get; set; }

        public MngdComponent()
        {
            Value = 0;            
        }   

        public MngdComponent(int value)
            : base()
        {
            Value = value;
        }

        public void printMessage(string sMsg)
        {
            var msg = new StringBuilder(sMsg)
                .AppendLine()
                .Append("Value: ")
                .AppendLine(Value.ToString(CultureInfo.InvariantCulture))
                .ToString();

            System.Console.WriteLine(msg);
            Trace.WriteLine(msg);
        }

        public int findControllers()
        {
            ControllerHub.DiscoverControllers();
            ICollection<Controller> controllers = ControllerHub.GetAll();
            
            foreach (Controller controller in controllers)
            {
                if ((controller.ProductID == 0x4001 || controller.ProductID == 0x5001) &&
                    (controller.ProductSubclass == 2 || controller.ProductSubclass == 3 ||
                     controller.ProductSubclass == 1 || controller.ProductSubclass == (unchecked((int)0xffffffd9))))
                {
                    System.Console.WriteLine("Found a controller");
                }
            }

            return controllers.Count;                      
        }
    }
}

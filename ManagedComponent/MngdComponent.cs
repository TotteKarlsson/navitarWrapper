using System.Diagnostics;
using System.Globalization;
using System.Text;

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

        public void PrintMessage(string sMsg)
        {
            var msg = new StringBuilder(sMsg)
                .AppendLine()
                .Append("Value: ")
                .AppendLine(Value.ToString(CultureInfo.InvariantCulture))
                .ToString();

            System.Console.WriteLine(msg);
            Trace.WriteLine(msg);
        }
    }
}

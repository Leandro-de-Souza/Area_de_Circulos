using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_CIRCULO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double r, area, pi;

            Console.Write("Digite o valor do raio do circulo: ");
            r = double.Parse(Console.ReadLine(), CI);

            pi = 3.14159;
            area = pi * r * r;

            Console.WriteLine("AREA = " + area.ToString("F3", CI));

        }
    }
}

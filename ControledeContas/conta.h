
namespace POO_C_sharp
{
    public class Conta
    {
        public Conta(long numero)
        {
            numero = Numero;
        }
        public long Numero{ get; private set; }
            public decimal saldo{
                get
                {
                    return saldo;
                }

                set
                {
                    if (saldo >= 0.0m)
                    {
                        saldo = value;

                    }
                    else
                    {
                        Console.WriteLine("O saldo não pode ser definido como negativo.");
                    }
                }
        }
        public long numero;

    }
}
using namespace;
using POO_C_sharp;
Conta conta1 = new Conta(1234);
Conta conta2 = new Conta(654321);
conta2.saldo = 2341.42m;
conta1.saldo = 6.0m;
Console.WriteLine($"a conta de numero {conta2.Numero} tem o saldo de {conta2.saldo}");


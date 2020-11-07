static void Main(string[] args)
{
    for (int i = 0; i < 100; i=i+10)
    {
        for (int j = i; j < i + 10; j++)
        {
            Console.Write(j + "\t");
        }
        Console.WriteLine();
    }
}

Main(null);
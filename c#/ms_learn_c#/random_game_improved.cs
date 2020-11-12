Random dice = new Random();

int roll1 = dice.Next(1, 7);
int roll2 = dice.Next(1, 7);
int roll3 = dice.Next(1, 7);

// roll1 = roll2 = roll3 = 4;

int total = roll1 + roll2 + roll3;

Console.WriteLine($"Dice roll: {roll1} + {roll2} + {roll3} = {total}");

if ((roll1 == roll2) || (roll2 == roll3) || (roll3 == roll1))
{
    if ((roll1 == roll2) && (roll2 == roll3))
    {
        Console.WriteLine("Wow, You rolled triples! + 6 bouns to the total");
        total += 6;
    }
    else
    {
        Console.WriteLine("You rolled doubles! + 2 bouns to total");
        total += 2;
    }
}

// || is OR, && is AND

if (total > 15)
{
    Console.WriteLine("You Win!");
}
else
{
    Console.WriteLine("Sorry, You Lose.");
}
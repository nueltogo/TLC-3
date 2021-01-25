#include <iostream>

int num()
{
	int number;
	std::cout << "Please enter a number: ";
	std::cin >> number;
	return number;
}

void multi_table(int num)
{
	int multiplier = 1;
	for(int flag =0; flag < 20; flag++)
	{
		int result = multiplier * num;
		std::cout << multiplier << " x " << num << " = " << result << std::endl;
		multiplier++;
	}
}

void non_divisible(int num)
{
	int flag = 0;
	int numbers = 1;
	while(flag < 30)
	{
		if(numbers % num != 0)
		{
			std::cout << numbers << std::endl;
			flag++;
		}
		numbers++;

	}
}

int even_odd_checker(int num)
{
	if(num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int number = num();
        int even_odd = even_odd_checker(number);
	if(even_odd == 1)
	{
		multi_table(number);
	}		
	else
	{ 	
		non_divisible(number);
	}
}

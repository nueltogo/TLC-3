#include <iostream>
int var1, var2, var3, var4, var5;

int mean_value(var1, var2, var3, var4, var5)
{
	int mean = (var1+var2+var3+var4+var5)
	return mean;
}

int mode_value(var1,var2,var3,var4,var5)
{
	
}

int main()
{
	std::cout << "Please Enter Five Numbers" << std::endl;
	std::cin >> var1 >> var2 >> var3 >> var4 >> var5;
	int mean = mean_value(var1,var2,var3,var4,var5);
	std::cout << "The meand of the values is: " << mean << std::endl;
}

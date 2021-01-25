#include <iostream>
int var1, var2, var3, var4, var5;
int array[] = {var1,var2,var3,var4,var5};
int mean_value(int array[])
{
	int mean = (array[0]+array[1]+array[2]+array[3]+array[4])/5
	return mean;
}

int mode_value(int array[])
{
	int mode = 0;
	int count_array[] = {};
	int sorted_array = sort(array, array + 1);
	for(int i, i < 5, i++)
	{

	}
}

int main()
{
	std::cout << "Please Enter Five Numbers" << std::endl;
	std::cin >> var1 >> var2 >> var3 >> var4 >> var5;
	int mean = mean_value(var1,var2,var3,var4,var5);
	std::cout << "The meand of the values is: " << mean << std::endl;
}

#include <iostream>
int var1, var2, var3, var4, var5;
float mean_value(int array[])
{
	float mean = (array[0]+array[1]+array[2]+array[3]+array[4])/5;
	return mean;
}
/*
int mode_value(int array[])
{
	int mode = 0;
	int count_array[] = {};
	int sorted_array = qsort(array, array + 5);
	for(int i, i < 5, i++)
	{

	}
}
*/
int main()
{
	std::cout << "Please Enter Five Numbers" << std::endl;
	std::cin >> var1 >> var2 >> var3 >> var4 >> var5;
	int array[] = {var1,var2,var3,var4,var5};
	float mean = mean_value(array);
	std::cout << "The meand of the values is: " << mean << std::endl;
}

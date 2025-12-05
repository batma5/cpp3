# include <iostream>
# include <array>
# include <span>

// void product(std::span<int> inputOutput, std::span<int> coefficients)
// {
   	 // ...
// }

// break
void arrWithBreak( std::span<int> arr1, std::span<int> arr2 )
{
	int i = 0;
	while (true)
	{
		if ( i >= arr1.size() )
		{
			break;
		}

		arr1[i] *= arr2[i];
		// std::cout << arr1[i] << std::endl;
		i++;
	}
}

// while
void arrWithWhile( std::span<int> arr1, std::span<int> arr2 )
{
	int i = 0;
	while (i < arr1.size())
	{
		arr1[i] *= arr2[i];
		// std::cout << arr1[i] << std::endl;
		i++;
	}
}

// for
void arrWithFor( std::span<int> arr1, std::span<int> arr2 )
{
	for (int i = 0; i < arr1.size(); i++)
	{
		arr1[i] *= arr2[i];
		// std::cout << arr1[i] << std::endl;
	}
}


// print
void print( std::span<int> arr1, std::span<int>arr2 )
{
	// Before
	std::cout << "Before" << std::endl;

	int localArr[5];
	for (int i = 0; i < arr1.size(); i++)
	{
		localArr[i] = arr1[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < arr1.size(); j++)
		{
			localArr[j] /= arr2[j];
		}
	}

	for ( int i : localArr )
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl;


	// After
	std::cout << "After" << std::endl;
	for ( int i : arr1 )
	{
		std::cout << i << std::endl;
	}
}


int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 2, 4, 5, 8, 10 };

	// break
	arrWithBreak( arr1, arr2 );

	// while
	arrWithWhile( arr1, arr2 );

	// for
	arrWithFor( arr1, arr2 );

	// print
	print( arr1, arr2 );


//	// span
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	std::span<int> s(arr1);
//
//	for (int x1 : s)
//	{
//		std::cout << x1 << std::endl;
//	}
//
//	// array
//	std::array<int, 5> arr2 = { 1, 2, 3, 4, 5 };
//
//	for (int x2 : arr2)
//	{
//		std::cout << x2 << std::endl;
//	}
}

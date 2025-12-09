# include <iostream>

// int hello(int i);

int static hello( int i )
{
        int result = 5;
        return result;
}



int main()
{
	std::cout << hello(3) << std::endl;
}

// task 1
#include <iostream>
#include <string>

int main()
{ 
    long long a, b;
    std::cin >> a >> b;
    std::cout << a + b;
}
    
// // task 2
# include <iostream>
# include <string>

int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << a + b << " ";
    std::cout << a - b << " ";
    std::cout << a * b << " ";
    std::cout << a / b << " ";

}

//task 3
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << std::sqrt (a * a + b * b);
    
}

// task 4
#include <iostream>
#include <string>

int main()
{
    long long v, t;
    std::cin >> v >> t;
    long long s = (v * t) % 109;
    std::cout << s;
}


// task 5
#include <iostream>
#include <string>

int main()
{
    long long n;
    std::cin >> n;
    
    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;
    std::cout << h << ":";
    if ( m < 10) std::cout << "0";
    std::cout << m << ":";
    if (s < 10) std::cout << "0";
    std::cout << s;
}
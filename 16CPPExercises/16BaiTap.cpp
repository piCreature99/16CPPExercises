// 16BaiTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>

void bt1() {

    std::cout << "Xin Chao!" << std::endl;
    std::string str = "Xin Chao!";
    std::cout << str << std::endl;
}

void bt2() {

    std::cout << 5 + 8 << std::endl;
}

void bt3() {

    std::string str{};
    std::cout << "Enter your name: ";
    std::cin >> str;
    std::cout << "Hello " << str << std::endl;
}

void bt4() {

    int x{}, y{};
    std::cout << "Enter int x: ";
    std::cin >> x;
    std::cout << "Enter int y: ";
    std::cin >> y;
    std::cout << "Sum of x and y is: " << x + y << std::endl;
}

void bt5() {
    int x{}, y{}, temp{};

    std::cout << "Enter int x: ";
    std::cin >> x;
    std::cout << "Enter int y: ";
    std::cin >> y;

    temp = x;
    x = y;
    y = temp;

    std::cout << "x = y = " << x << "and " << "y = x = " << y << std::endl;
}

void bt6() {

    float x{}, y{};

    std::cout << "Enter float x: ";
    std::cin >> x;
    std::cout << "Enter float y: ";
    std::cin >> y;

    std::cout << "Addition: x + y = " << x + y << std::endl;
    std::cout << "Difference: x - y = " << x - y << std::endl;
    std::cout << "Product: x * y = " << x * y << std::endl;
    std::cout << "Division: x / y = " << x / y << std::endl;
    
}

void bt7() {
    float x{}, y{}, z{};

    std::cout << "Enter float x: ";
    std::cin >> x;
    std::cout << "Enter float y: ";
    std::cin >> y;
    std::cout << "Enter float z: ";
    std::cin >> z;

    float max = x;
    float min = y;

    if (y > max) {
        max = y;
        
        if (z > max) {
            max = z;
        }
        
    }
    else if (z > max) {
        max = z;
    }

    if (z < min) {
        min = z;
        if (x < min) {
            min = x;
        }

    }
    else if (x < min) {
        min = x;
    }
    
    std::cout << "Max is: " << max << std::endl;
    std::cout << "Min is: " << min << std::endl;

}

void bt8() {
    float n{}, sum{};

    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i{ 1 }; i <= n; i++) {
        sum += i;
    }

    std::cout << "Average is: " << sum / n << std::endl;
}

void bt9() {

    std::cout << "Calculate area of triangle xyz" << std::endl;

    float x{}, y{}, z{};

    std::cout << "Enter float x: ";
    std::cin >> x;
    std::cout << "Enter float y: ";
    std::cin >> y;
    std::cout << "Enter float z: ";
    std::cin >> z;

    if (x + y > z && x + z > y && z + y > x) {
        float halfP = (x + y + z) / 2;
        float heron{ sqrt(halfP * (halfP - x) * (halfP - y) * (halfP - z)) };

        std::cout << "Area is: " << heron << std::endl;
    }
    else { std::cout << "Not a triange" << std::endl; }
}

void bt10() {
    std::cout << "Solve quadratic equation ax^2 + by + c" << std::endl;

    float a{}, b{}, c{};

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    float del = b * b - 4 * a * c;
    float x1 = (- b - sqrt(del)) * 0.5f * a;
    float x2 = (- b + sqrt(del)) * 0.5f * a;

    if (a != 0) {
        if (del > 0) {

            std::cout << "2 roots found: " << "x = " << x1 << "and " << "x = " << x2 << std::endl;
        }
        else if (del < 0) {

            std::cout << "no solutions" << std::endl;

        }
        else if (del == 0) {

            std::cout << "1 root found: " << "x = " << x1 << std::endl;
        }
    }
    else { std::cout << "Not a quadratic equation" << std::endl; }
}

void bt11() {
    int n{};
    std::cout << "Enter n: ";
    std::cin >> n;

    for(int i{1}; i <= n; i++) {
        for (int j{ 1 }; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void bt12() {

    int n{};
    std::cout << std::setw(10) << std::left << "Enter n" << ": ";
    std::cin >> n;
    bool isPrime = true ;
    for (int i{ 2 }; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
        }
    }

    std::cout << "n is" << (isPrime == true ? "" : " not") << " a prime" << std::endl;
}

void bt13() {

    int n = 0, target = 0;
    std::vector<int> arr = {};

    std::cout << "Enter array size :";
    std::cin >> n;
    std::cout << "Enter target :";
    std::cin >> target;

    for (int i{}; i < n; i++) {
        int temp{};
        std::cout << "Enter element " << i + 1 << " :";
        std::cin >> temp;
        arr.push_back(temp);
    }

    std::cout << std::endl;

    for (int i{}; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    int count = 0;

   /* for (int i{}; i < n - 1; i++) {
        for (int j{}; j < n - i - 1; j++) {
            if (arr[i] + arr[i + 1 + j] == target) {
                count++;
                std::cout << "pair " << count << " of positions with their sum equal target is : " << i + 1 << " and " << i + 2 + j << std::endl;
            }
        }
    }*/

    for (int i{}; i < n; i++) {
        for (int j{}; j < i; j++) {
            if (arr[j] + arr[i] == target) {
                count++;
                std::cout << "Pair " << count << " of positions with their sum equals target is : " << j + 1 << " and " << i + 1 << std::endl;
            }
        }
    }
}

void bt14() {

    int n{};
    std::vector<int> arr{};
    std::vector<int> arrResult{};

    std::cout << "Enter array size :";
    std::cin >> n;

    for (int i{}; i < n; i++) {
        int temp{};
        std::cout << "Enter element " << i + 1 << " :";
        std::cin >> temp;
        arr.push_back(temp);
    }

    int sum{};

    for (int i{}; i < n; i++) {
        arrResult.push_back(sum + arr[i]);
        sum += arr[i];
    }

    for (int i{}; i < n; i++) {
        std::cout << arrResult[i] << " ";
    }
}

void bt15() {

    int n{};
    std::cout << "Enter cycle size :";
    std::vector<std::string> arr{};
    std::cin >> n;

    for (int i{}; i <= n; i++) {
        std::string temp{};
        temp = (i % 3 == 0 && i % 5 == 0 && i > 0) ? "FizzBuzz" : (i % 3 == 0 && i > 0) ? "Fizz" : (i % 5 == 0 && i > 0) ? "Buzz" : std::to_string(i + 1);
        arr.push_back(temp);
    }

    for (int i{}; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

void bt16() {

    int n{};
    std::cout << "Enter n (n > 0) : ";
    std::cin >> n;

    int count{};

    while (n > 0) {

        if (n % 2 == 0) {
            std::cout << n << " / 2 = " << n / 2 << std::endl;
            n /= 2;
        }
        else {
            std::cout << n << " - 1 = " << n - 1 << std::endl;
            n -= 1;
        }
        count++;
    }

    std::cout << "steps taken : " << count;
}

int main()
{
    int a{};
    std::cout << "Enter exercise number: ";
    std::cin >> a;

    switch (a) {
        case 1:
            bt1();
            break;
        case 2:
            bt2();
            break;
        case 3:
            bt3();
            break;
        case 4:
            bt4();
            break;
        case 5:
            bt5();
            break;
        case 6:
            bt6();
            break;
        case 7:
            bt7();
            break;
        case 8:
            bt8();
            break;
        case 9:
            bt9();
            break;
        case 10:
            bt10();
            break;
        case 11:
            bt11();
            break;
        case 12:
            bt12();
            break;
        case 13:
            bt13();
            break;
        case 14:
            bt14();
            break;
        case 15:
            bt15();
            break;
        case 16:
            bt16();
            break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

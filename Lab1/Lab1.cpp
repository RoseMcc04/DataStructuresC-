#include <iostream>
#include <cmath>
#include <limits>
#include <array>
#include "Lab1.hpp"

void Lab1::func1(std::string s, int ct)
{
    for (int i = 0; i < ct; i++) 
    {
        std::cout << s << "\n";
    }
}

void Lab1::func2(std::string s, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++) 
    {
        count++;
    }
    std::cout << count << std::endl;
}

void Lab1::func3(std::string s, int len)
{
    for (int i = 0; i < len; i++) 
    {
        if (i % 2 == 0) 
        {
            std::cout << s.at(i) << " ";
        }
    }
    std::cout << std::endl;
}

int Lab1::func4(int arr[], int len)
{
    int total = 0;
    for (int i = 0; i < len; i++) 
    {
        total += arr[i];
    }
    return round(total / len);
}

int Lab1::func5(int arr[], int val, int len)
{
    int diff;
    int closest_i;
    int minDiff = std::numeric_limits<int>::max();
    if (len == 0) 
    {
        return -1;
    }
    if (len == 1) 
    {
        return 0;
    }
    for (int i = 0; i < len; i++) 
    {
        diff = std::abs(val - arr[i]);
        if (diff == 0) 
        {
            return i;
        }
        else 
        {
            if (diff < minDiff) 
            {
                minDiff = diff;
                closest_i = i;
            }
        }
    }
    return closest_i;
}

void Lab1::func6(int arr[], int ind, int len)
{

}

void Lab1::func7(std::string s, int arr[], int len, int i1, int i2, bool do_pr)
{

}

void Lab1::func8(std::string s, int len, int arr[], int len2)
{

}

void Lab1::func9(std::string s7, int f9arr1[], int f9arr2[], int len1, int len2)
{

}

void Lab1::func10(std::string str10, int f10arr[], int len)
{

}

void Lab1::func11(std::string s7, int len, int msize)
{

}

void Lab1::func12(std::string s, int len, int msize)
{

}

void Lab1::func11a(char mat[5][5], int xcoord[], int ycoord[], int len)
{

}

int main() 
{
    // Object test created to execute functions
    Lab1 test;

    // Collection of algorithms we want to run
    // test.func1("coffee! ", 4);
    // test.func2("kceacruanmpedle sluastethev", 28);
    // test.func3("speliknuweorrubs tergudeunfe cestmanlbowctoshac", 47);
    int f4arr1[6] = {17, 10, 5, 20, 18, 2};
    std::cout << test.func4(f4arr1, 6) << "\n";

    return 0;
}

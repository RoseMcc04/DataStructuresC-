#ifndef LAB1_HPP // Checks if LAB1_HPP is not defined
#define LAB1_HPP // Define LAB1_HPP

#include <iostream>
#include <stdlib.h>
#include <string.h>

class Lab1 
{
    public: 
        // Functions for the first problem set

        /**
         * @brief This function prints the inputted string a determined number of times
         * 
         * @param s String being printed
         * @param ct The number of times the string is printed
         */
        void func1(std::string s, int ct);

        /**
         * @brief This function prints out the length of the inputted string
         * 
         * @param s String the user wants the length of
         * @param len The length of the inputted string
         */
        void func2(std::string s, int len);

        /**
         * @brief This function prints out every other character in the string
         * 
         * @param s String the user wants to manipulate
         * @param len The length of the inputted string
         */
        void func3(std::string s, int len);

        /**
         * @brief This function returns the sum of the inputted array
         * 
         * @param arr Array being manipulated
         * @param len Length of the inputted array
         * 
         * @return Returns the average of the array values 
         */
        int func4(int arr[], int len);

        /**
         * @brief This function returns the index of the value in the array closest to 
         * the inputted value being checked
         * 
         * @param arr Array being manipulated
         * @param val Value we are searching for
         * @param len Length of the inputted array
         * 
         * @return Returns the index of the value closest to val
         */
        int func5(int arr[], int val, int len);

        /**
         * @brief This function swaps the minimum value in the array with the value of 
         * the inputted index
         * 
         * @param arr Array being manipulated
         * @param ind Index of the first number being switched
         * @param len Length of the inputted array
         */
        void func6(int arr[], int ind, int len);

        /**
         * @brief This function shifts all values to the right between the first and 
         * second index parameters, and replaces the value at the first index with the
         * value at the last index
         * 
         * @param s String input that could possibly be printed out
         * @param arr Array being manipulated
         * @param len Length of the inputted array
         * @param i1 Index of first value being swapped
         * @param i2 Index of second value being swapped
         * @param do_pr Boolean determining if we should print the values from the 
         * inputted string
         */
        void func7(std::string s, int arr[], int len, int i1, int i2, bool do_pr);

        /**
         * @brief This function is interesting; For each of the numbers in the array 
         * of numbers, the function adds up the digits in the number. It then 
         * calculates an index into the string by finding the remainder when dividing 
         * by the string size. 
         * 
         * @param s String being manipulated
         * @param len Length of the string input
         * @param arr Array being manipulated
         * @param len2 Length of the inputted array
         */
        void func8(std::string s, int len, int arr[], int len2);

        /**
         * @brief This function creates a new array whose length is the length 
         * of the first array plus the length of the second array. The function
         * then combines the first array and the second array into the newly 
         * created array such that all of the values are in order. Both input 
         * arrays should be in order. 
         * 
         * @param s String inputted where we can get the char from
         * @param f9arr1 First array inputted being manipulated
         * @param f9arr2 Second array inputted being manipulated
         * @param len1 The length of f9arr1
         * @param len2 The length of f9arr2
         */
        void func9(std::string s7, int f9arr1[], int f9arr2[], int len1, int len2);

        /**
         * @brief This function takes an array of integers and removes all of 
         * the duplicates. The function then uses the remaining integers to 
         * prinnt out the corresponding character in the input string. 
         * 
         * @param str10 String being used for characters
         * @param f10arr Array being manipulated
         * @param len The length of f10arr
         */
        void func10(std::string str10, int f10arr[], int len);

        /**
         * @brief This function creates a matrix of size by size and fills 
         * in the characters such that the first size characters are in the 
         * first row, the second size characters are in the second row, etc.; 
         * Then the function should print out the diagonal characters (0,0 to 
         * size,size). 
         * 
         * @param s7 String inputted where characters will be pulled from 
         * @param len The length of the string
         * @param msize The inputted size for the matrix
         */
        void func11(std::string s7, int len, int msize);

        /**
         * @brief This function creates a matrix of size by size and fills 
         * in the characters such that the first size characters are in the 
         * first row, the second size characters are in the second row (just 
         * like func11()). Then, the function should print out the reverse 
         * diagonal characters. 
         */
        void func12(std::string s, int len, int msize);

        /**
         * @brief This function should print out the matrix at each of the x 
         * and y coordinates (so it should print the matrix at the first x and 
         * first y value, then the matrix at the second x and second y value, 
         * etc., for all values in the x and y arrays.)
         * 
         * @param mat Matrix of characters
         * @param xcoord Array of x-coordinates being manipulated
         * @param ycoord Array of y-coordinates being manipulated
         * @param len The length of the arrays inputted
         */
        void func11a(char mat[5][5], int xcoord[], int ycoord[], int len);
};

#endif // End of include guard for LAB1_HPP
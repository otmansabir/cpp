#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <sstream>
#include <cstdlib>

class RPN
{
    private:
        std::stack<int>         Math;
    public:
        RPN();
        RPN(RPN const &P);
        RPN &operator=(RPN const &P);
        ~RPN();

        void start_calculation(std::string input);
        bool Parsing(std::string input);
        bool OneWayParsing(std::string input);
        int Calculation(int a, int b, std::string opr);
};

#endif
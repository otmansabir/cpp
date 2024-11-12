#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <sstream>
#include <cstdlib>

class Polish
{
    private:
        std::stack<int>         Math;
    public:
        Polish();
        Polish(Polish const &P);
        Polish &operator=(Polish const &P);
        ~Polish();

        void start_calculation(std::string input);
        bool Parsing(std::string input);
        bool OneWayParsing(std::string input);
        int Calculation(int a, int b, std::string opr);
};

#endif
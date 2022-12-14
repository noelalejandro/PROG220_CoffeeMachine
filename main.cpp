// PROG 220-02
// Coffee Machine
// Noel Gutierrez

#include "main.hpp"

using namespace std;

int main()
{
    int count = 0;
    int coffees = 0;
    int water = 0;
    int grounds = 0;

    std::ifstream order("input.txt");

    if (order.is_open())
    {
        while (order>>count)
        {
            coffees = coffees + count;
            water = coffees;
            grounds = coffees * 2;
        }

        std::cout<<"Number of coffees:"<<coffees<<std::endl;
        std::cout<<"Cups of water needed:"<<water<<std::endl;
        std::cout<<"Ounces of grounds needed:"<<grounds<<std::endl;
        
        order.close();

    } else {
        std::cout<<"Could not read order!"<<std::endl;
    }

    return 0;
}

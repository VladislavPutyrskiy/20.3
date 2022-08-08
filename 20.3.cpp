#include <iostream>
#include <string>
#include <fstream> 


    int main()
    {
        std::string qwery_fish;
        std::string from_river;
        int catched = 0;
        std::cout << "What fish do you want to catch?\n";
        std::cin >> qwery_fish;
        std::ifstream river("river.txt");
        std::ofstream basket("basket.txt", std::ios::app);
        if (river.is_open() && basket.is_open())
        {
            while (getline(river, from_river))
            {
                if (qwery_fish == from_river)
                {
                    basket << from_river << std::endl;
                    catched++;
                }
            }
            river.close();
            basket.close();
        }
        std::cout << "you have catched " << catched << " fish";
    }

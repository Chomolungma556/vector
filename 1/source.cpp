#include <iostream>
#include <vector>
#include <stdexcept>

int main()
{
    std::vector<int> sampleVector;

    // sampleVectorのindex0～9に要素を詰める. 
    for (int i = 0; i < 10; i++)
    {
        sampleVector.push_back(i);
    }

    try
    {
        // sampleVectorの管理範囲外であるindex10の要素にアクセスする. 
        std::cout << sampleVector.at(10) << std::endl;

        // atの境界チェックで例外を投げるため、この処理は実行されない. 
        std::cout << "Complete..." << std::endl;
    }
    catch (std::out_of_range& sampleException)
    {
        std::cout << "out of range!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << "End..." << std::endl;

    return 0;
}

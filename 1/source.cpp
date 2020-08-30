#include <iostream>
#include <vector>
#include <stdexcept>

int main()
{
    std::vector<int> sampleVector;

    // sampleVector��index0�`9�ɗv�f���l�߂�. 
    for (int i = 0; i < 10; i++)
    {
        sampleVector.push_back(i);
    }

    try
    {
        // sampleVector�̊Ǘ��͈͊O�ł���index10�̗v�f�ɃA�N�Z�X����. 
        std::cout << sampleVector.at(10) << std::endl;

        // at�̋��E�`�F�b�N�ŗ�O�𓊂��邽�߁A���̏����͎��s����Ȃ�. 
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

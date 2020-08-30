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

    std::cout << "###std::vector::at" << std::endl;

    // at
    try
    {
        // sampleVector�̊Ǘ��͈͊O�ł���index10�̗v�f�ɃA�N�Z�X����. 
        for (int i = 1; i <= 10; i++)
        {
            std::cout << sampleVector.at(i) << std::endl;
        }

        // at�̋��E�`�F�b�N�ŗ�O�𓊂��邽�߁A���̏����͎��s����Ȃ�. 
        std::cout << "Complete..." << std::endl;
    }
    catch (std::out_of_range& sampleException)
    {
        std::cout << "out of range!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << std::endl << "###std::vector::operator[]" << std::endl;

    // operator[]
    try
    {
        // sampleVector�̊Ǘ��͈͊O�ł���index10�̗v�f�ɃA�N�Z�X����. 
        for (int i = 1; i <= 10; i++)
        {
            std::cout << sampleVector[i] << std::endl;
        }

        // ���E�`�F�b�N�����̂��߁A���̂܂ܕs��l���o�͂���A���s�����ƂȂ�. 
        std::cout << "Complete..." << std::endl;
    }
    // ���E�`�F�b�N�����̂��߁A��O�͓����Ȃ�. 
    catch (std::out_of_range& sampleException)
    {
        std::cout << "out of range!" << std::endl;
        std::cout << "Error : " << sampleException.what() << std::endl;
    }

    std::cout << "End..." << std::endl;

    return 0;
}

//
// Created by andrei on 16.07.2021.
//

#ifndef CARWASH_DATA_H
#define CARWASH_DATA_H
class Data{
private:
    unsigned int an;
    unsigned int zi;
    unsigned int luna;
public:
    Data();
    Data(int, int, int);
    Data(const Data);
    Data operator=(const Data);
    ~Data();
};


#endif //CARWASH_DATA_H

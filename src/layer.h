#include <iostream>
#include <vector>
#include <random>
#include <cmath>

template <typename T>
class Layer
{
protected:
    T input;
    T output;

public:
    virtual void forward(const T &input) = 0;
    virtual T backward(const T &output_gradient, float learning_rate) = 0;
};
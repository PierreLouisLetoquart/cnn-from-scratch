#include <iostream>
#include "layer.h"

template <typename T>
class Activation : public Layer<T>
{
private:
    T input;
    T(*activation)
    (const T &);
    T(*activation_prime)
    (const T &);

public:
    Activation(T (*activation_func)(const T &), T (*activation_prime_func)(const T &))
    {
        activation = activation_func;
        activation_prime = activation_prime_func;
    }

    void forward(const T &input) override
    {
        this->input = input;
        this->output = activation(this->input);
    }

    T backward(const T &output_gradient, float learning_rate) override
    {
        return output_gradient * activation_prime(this->input);
    }
};

#include "layer.h"

template <typename T>
class Dense : public Layer<T>
{
private:
    T weights;
    T bias;

public:
    Dense(int input_size, int output_size)
    {
        // Initialize weights and bias with random values
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<float> distribution(0.0, 1.0);

        std::vector<float> weights_data(output_size * input_size);
        std::vector<float> bias_data(output_size);

        for (float &weight : weights_data)
        {
            weight = distribution(gen);
        }

        for (float &b : bias_data)
        {
            b = distribution(gen);
        }

        weights = T(weights_data, {output_size, input_size});
        bias = T(bias_data, {output_size, 1});
    }

    void forward(const T &input) override
    {
        this->input = input;
        this->output = weights * input + bias;
    }

    T backward(const T &output_gradient, float learning_rate) override
    {
        T weights_gradient = output_gradient * this->input.transpose();
        T input_gradient = weights.transpose() * output_gradient;
        weights -= learning_rate * weights_gradient;
        bias -= learning_rate * output_gradient;
        return input_gradient;
    }
};
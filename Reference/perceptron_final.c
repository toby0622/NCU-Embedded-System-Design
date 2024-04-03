#include <stdio.h>
#include <math.h>

// 感知器結構
typedef struct {
    float weights[2];
    float bias;
} Perceptron;

// 初始化感知器結構
void initializePerceptron(Perceptron* perceptron) {
    perceptron->weights[0] = 0;
    perceptron->weights[1] = 0.4;
    perceptron->bias = 0.3;
}

// 激活函數
int activationFunction(float sum) {
    return (sum > 0) ? 1 : 0;
}

// 訓練感知器
void trainPerceptron(Perceptron* perceptron, float inputs[][2], int expectedOutputs[], int numIterations) {
    for (int iteration = 1; iteration <= numIterations; ++iteration) {
        printf("Iteration %d:\n", iteration);
        float totalError = 0;
        for (int i = 0; i < 4; ++i) {
            float sum = inputs[i][0] * perceptron->weights[0] + inputs[i][1] * perceptron->weights[1] + perceptron->bias;
            int output = activationFunction(sum);
            int error = expectedOutputs[i] - output;
            totalError += pow(error, 2);
            
            // 更新權重和偏差
            perceptron->weights[0] += 0.1 * error * inputs[i][0];
            perceptron->weights[1] += 0.1 * error * inputs[i][1];
            perceptron->bias += 0.1 * error;
            
            printf("Input: %d %d, Expected Output: %d, Perceptron Output: %d, Error: %d\n",
                   (int)inputs[i][0], (int)inputs[i][1], expectedOutputs[i], output, error);
        }
        totalError = sqrt(totalError);
        printf("Total Error: %f\n", totalError);
        if (totalError == 0) {
            printf("Training converged after %d iterations.\n", iteration);
            break;
        }
    }
}

int main() {
    Perceptron perceptron;
    float inputs[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    int expectedOutputs[4] = {0, 0, 0, 1};
    
    initializePerceptron(&perceptron);
    
    trainPerceptron(&perceptron, inputs, expectedOutputs, 50);
    
    return 0;
}

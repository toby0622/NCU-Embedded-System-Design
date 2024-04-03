#include <stdio.h>
#include <math.h>

// Step 1: 構建感知器結構
void initializeWeightsAndBias(float weights[], float bias) {
    // 初始化權重和偏差
    weights[0] = 1.0;
    weights[1] = 1.0;
    bias = -1.5;
}

int activationFunction(float sum) {
    // 選擇階梯函數作為激活函數
    if (sum > 0) {
        return 1;
    } else {
        return 0;
    }
}

// Step 2: 訓練感知器
void trainPerceptron(float inputs[], float weights[], float bias, int expectedOutput) {
    float sum = 0;
    // 計算加權總和
    for (int i = 0; i < 2; ++i) {
        sum += inputs[i] * weights[i];
    }
    sum += bias;
    
    // 應用激活函數
    int output = activationFunction(sum);
    
    // 計算誤差並更新權重和偏差
    float error = expectedOutput - output;
    for (int i = 0; i < 2; ++i) {
        weights[i] += error * inputs[i];
    }
    bias += error;
}

// Step 3: 驗證和測試
int testPerceptron(float inputs[], float weights[], float bias) {
    float sum = 0;
    // 計算加權總和
    for (int i = 0; i < 2; ++i) {
        sum += inputs[i] * weights[i];
    }
    sum += bias;
    
    // 應用激活函數
    return activationFunction(sum);
}

int main() {
    float weights[2];
    float bias;
    float inputs[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    int expectedOutputs[4] = {0, 0, 0, 1};
    
    initializeWeightsAndBias(weights, bias);
    
    // 訓練感知器
    for (int i = 0; i < 4; ++i) {
        trainPerceptron(inputs[i], weights, bias, expectedOutputs[i]);
    }
    
    // 驗證和測試
    printf("AND Logic Test:\n");
    for (int i = 0; i < 4; ++i) {
        int output = testPerceptron(inputs[i], weights, bias);
        printf("Input: %d, %d, Output: %d\n", (int)inputs[i][0], (int)inputs[i][1], output);
    }
    
    return 0;
}

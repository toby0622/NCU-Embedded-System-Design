// single layer perceptron design for linear separable function

#include <stdio.h>

int main() {
    int i, j;
    // input pattern: "X0" bias, "X1 X2" range 00-11
    int x[4][3];
    // "actual" output of the perceptron after calculating
    // the aggregated sum of weights and respective inputs
    int actual[4];
    // "desire" output of the perceptron after calculating
    // the aggregated sum of weights and respective inputs
    int desire[4];
    // error capture: "desire" - "actual"
    int error;
    // number of iterations
    int epoch = 0;

    float net = 0.0;
    float learning_rate;
    // associated weights for each input to neuron
    float weight[3];

    printf("------ Perceptron Training ------\n");
    printf("------ Enter Bias & Logical Inputs ------\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("------ Enter Associated Weights For Each Input ------\n");

    for (i = 0; i < 3; i++) {
        scanf("%f", &weight[i]);
    }

    printf("------ Enter Desired Output ------\n");

    for (i = 0; i < 4; i++) {
        scanf("%d", &desire[i]);
    }

    printf("------ Enter Learning Rate ------\n");

    scanf("%f", &learning_rate);

    printf("\n");

    printf("Bias\tX1\tX2\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", x[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    printf("W0\tW1\tW2\n");

    for (i = 0; i < 3; i++) {
        printf("%.2f \t", weight[i]);
    }

    printf("\n");
    printf("\n");

    printf("Desired Output-desire\n");

    for (i = 0; i < 4; i++) {
        printf("%d \n", desire[i]);
    }

    printf("\n");

    printf("Learning Rate: %.2f\n", learning_rate);

    printf("W0\tW1\tW2\tNet Output\tactual\tdesire\n");

    do {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                net = net + (weight[j] * x[i][j]);
            }

            if (net >= 0) {
                actual[i] = 1;
            } else {
                actual[i] = 0;
            }

            error = desire[i] - actual[i];

            for (j = 0; j < 3; j++) {
                weight[j] = weight[j] + (learning_rate * error * x[i][j]);
                printf("%.2f \t", weight[j]);
            }

            printf("%.2f \t\t %d \t %d \n", net, actual[i], desire[i]);
        }

        epoch++;
    } while (actual[0] != desire[0] || actual[1] != desire[1] || actual[2] != desire[2] || actual[3] != desire[3]);

    printf("\nFor Learning Rate: %.2f, Number Of Epochs: %d\n", learning_rate, epoch);

    return 0;
}

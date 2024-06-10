#include <stdio.h>

// Membership function for set A
float membership_function_a(int age) {
    if (age <= 20) {
        return 1;
    } else if (age > 20 && age <= 30) {
        return (30 - age) / 10.0;
    } else {
        return 0;
    }
}

// Membership function for set B
float membership_function_b(int age) {
    if (age <= 15) {
        return 1;
    } else if (age > 15 && age <= 35) {
        return (35 - age) / 20.0;
    } else {
        return 0;
    }
}

// Intersection of two sets
float intersection(float a, float b) {
    return a < b ? a : b;
}

// Union of two sets
float union_set(float a, float b) {
    return a > b ? a : b;
}

int main() {
    char names[5][100];
    int ages[5];

    // Input age and name of 5 persons
    for (int i = 0; i < 5; i++) {
        printf("Enter name of person %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    // Calculate membership degree for each person and perform set operations
    float membership_degrees_a[5], membership_degrees_b[5];
    float intersection_set[5], union_set[5];
    for (int i = 0; i < 5; i++) {
        membership_degrees_a[i] = membership_function_a(ages[i]);
        membership_degrees_b[i] = membership_function_b(ages[i]);
        intersection_set[i] = intersection(membership_degrees_a[i], membership_degrees_b[i]);
        union_set[i] = union_set(membership_degrees_a[i], membership_degrees_b[i]);
    }

    // Display results
    printf("\nResults:\n");
    printf("Name\t\tAge\tMembership Degree A\tMembership Degree B\tIntersection\tUnion\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t%.2f\n", names[i], ages[i], membership_degrees_a[i], membership_degrees_b[i], intersection_set[i], union_set[i]);
    }

    return 0;
}

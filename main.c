#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint32_t USER_ID;
#define MAX_QUESTIONS 256
#define MAX_DIMENSIONS 32

typedef struct dimension_s {
    char abbreviation[8];
    char full_name[64];
    char description[512];
} dimension_t;



typedef struct user_results_s {
    USER_ID user_id;
    uint8_t answers[MAX_QUESTIONS];
    uint8_t acceptable[MAX_QUESTIONS];
} user_results_t;

void ur_init(user_results_t *results, USER_ID user_id) {
    results->user_id = user_id;
    memset(results->answers, 0, sizeof(results->answers));
    memset(results->acceptable, 0, sizeof(results->acceptable));
}


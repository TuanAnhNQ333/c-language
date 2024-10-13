#include <stdio.h>

#define NUM_JUDGES 5

// Hàm nhập điểm của giám khảo
void get_judge_data(int *scores) {
    printf("Nhập điểm của %d giám khảo:\n", NUM_JUDGES);
    for (int i = 0; i < NUM_JUDGES; i++) {
        printf("Giám khảo %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
}

// Hàm tính và hiển thị điểm trung bình của thí sinh
void calc_score(int *scores) {
    int min_score = scores[0];
    int max_score = scores[0];
    int total_score = 0;
    
    // Tìm điểm thấp nhất và cao nhất
    for (int i = 0; i < NUM_JUDGES; i++) {
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        total_score += scores[i];
    }
    
    // Tính điểm trung bình sau khi bỏ điểm thấp nhất và cao nhất
    total_score = total_score - min_score - max_score;
    float average_score = (float)total_score / (NUM_JUDGES - 2);
    
    printf("Điểm trung bình của thí sinh là: %.2f\n", average_score);
}

int main() {
    int judge_scores[NUM_JUDGES];
    
    // Nhập điểm của giám khảo
    get_judge_data(judge_scores);
    
    // Tính và hiển thị điểm trung bình của thí sinh
    calc_score(judge_scores);
    
    return 0;
}

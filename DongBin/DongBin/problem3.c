#include <stdio.h>
#include <stdbool.h>

bool isCalibrationMode = false;

void beginCalibration() {
    isCalibrationMode = true;
}

void endCalibration() {
    isCalibrationMode = false;
}

void performRadiation(int dose) {
    printf("Radiation performed with dose: %d\n", dose);
}

//perform ->administer 전에 safe인지 확인
//machine -> treatment mode

void safeRadiation(int dose) {
    // 치료 모드인지 확인
    if (isCalibrationMode) {
        printf("Error: Machine is in calibration mode. Cannot administer radiation.\n");
        return;
    }
    // 선량이 안전 범위 내인지 확인
    if (dose < 1 || dose > 10) {
        printf("Error: Dose must be between 1 and 10 (inclusive). Cannot administer radiation.\n");
        return;
    }
    // 조건이 모두 만족할 경우 performRadiation 함수 호출
    performRadiation(dose);
}

int main() {
    // A technician calibrated the machine but forgot to switch back to treatment mode.
    beginCalibration();
    int calibrationDose = 30;
    performRadiation(calibrationDose);

    // The safe range for treatment is (0, 10)
    int patientDose = 15;
    // This should trigger the error message, protecting the patient
    safeRadiation(patientDose);

    // Switching back to treatment mode and testing again
    endCalibration();

    // This should successfully administer radiation
    patientDose = 5;
    safeRadiation(patientDose);

    return 0;
}

// safeRadiation
// administering -> treatment mode
// safe range 1~10
// administer -> radiation 조건 만족할때


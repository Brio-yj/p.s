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

//perform ->administer ���� safe���� Ȯ��
//machine -> treatment mode

void safeRadiation(int dose) {
    // ġ�� ������� Ȯ��
    if (isCalibrationMode) {
        printf("Error: Machine is in calibration mode. Cannot administer radiation.\n");
        return;
    }
    // ������ ���� ���� ������ Ȯ��
    if (dose < 1 || dose > 10) {
        printf("Error: Dose must be between 1 and 10 (inclusive). Cannot administer radiation.\n");
        return;
    }
    // ������ ��� ������ ��� performRadiation �Լ� ȣ��
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
// administer -> radiation ���� �����Ҷ�


#include <stdio.h>
#include <string.h>

#define FILE_NAME "reports.txt"

typedef struct {
    int id;
    char location[100];
} Report;

void addReport() {
    FILE *fp = fopen(FILE_NAME, "a");
    Report r;

    printf("\nEnter Report ID: ");
    scanf("%d", &r.id);
    getchar();

    printf("Enter Pothole Location: ");
    fgets(r.location, sizeof(r.location), stdin);
    r.location[strcspn(r.location, "\n")] = '\0';

    fprintf(fp, "%d|%s\n", r.id, r.location);
    fclose(fp);

    printf("Report Added Successfully!\n");
}

void searchReport() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) { printf("No records found.\n"); return; }

    int id;
    printf("\nEnter Report ID to Search: ");
    scanf("%d", &id);

    Report r;
    int found = 0;

    while (fscanf(fp, "%d|%99[^\n]\n", &r.id, r.location) != EOF) {
        if (r.id == id) {
            printf("\nReport Found:\nID: %d\nLocation: %s\n", r.id, r.location);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (!found) printf("Report Not Found.\n");
}

void updateReport() {
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *temp = fopen("temp.txt", "w");

    int id, found = 0;
    printf("\nEnter Report ID to Update: ");
    scanf("%d", &id);
    getchar();

    Report r;

    while (fscanf(fp, "%d|%99[^\n]\n", &r.id, r.location) != EOF) {
        if (r.id == id) {
            found = 1;
            printf("Enter New Location: ");
            fgets(r.location, sizeof(r.location), stdin);
            r.location[strcspn(r.location, "\n")] = '\0';
        }
        fprintf(temp, "%d|%s\n", r.id, r.location);
    }

    fclose(fp);
    fclose(temp);
    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found) printf("Report Updated Successfully.\n");
    else printf("Report ID Not Found.\n");
}

void deleteReport() {
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *temp = fopen("temp.txt", "w");

    int id, found = 0;
    printf("\nEnter Report ID to Delete: ");
    scanf("%d", &id);

    Report r;

    while (fscanf(fp, "%d|%99[^\n]\n", &r.id, r.location) != EOF) {
        if (r.id == id) {
            found = 1;
            continue;
        }
        fprintf(temp, "%d|%s\n", r.id, r.location);
    }

    fclose(fp);
    fclose(temp);
    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found) printf("Report Deleted Successfully.\n");
    else printf("Report ID Not Found.\n");
}

void viewAllReports() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) { printf("No reports found.\n"); return; }

    Report r;
    printf("\nAll Reports:\n");
    printf("-----------------------------\n");

    while (fscanf(fp, "%d|%99[^\n]\n", &r.id, r.location) != EOF) {
        printf("ID: %d  |  Location: %s\n", r.id, r.location);
    }
    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n=== FixMyRoad System ===\n");
        printf("1. Add Report\n");
        printf("2. Search Report\n");
        printf("3. Update Report\n");
        printf("4. Delete Report\n");
        printf("5. View All Reports\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addReport(); break;
            case 2: searchReport(); break;
            case 3: updateReport(); break;
            case 4: deleteReport(); break;
            case 5: viewAllReports(); break;
            case 6: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}

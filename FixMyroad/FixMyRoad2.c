#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure to store pothole report
struct Report {
    int id;
    char location[100];
    char description[200];
};

struct Report reports[MAX];
int count = 0;

// Function declarations
void loadData();
void saveData();
void addReport();
void updateReport();
void deleteReport();
void searchReport();
void viewAll();

int main() {
    int choice;

    loadData(); // Load existing data from file

    while (1) {
        printf("\n==============================\n");
        printf("       FixMyRoad System\n");
        printf("==============================\n");
        printf("1. Add New Pothole Report\n");
        printf("2. Update Existing Report\n");
        printf("3. Delete Report\n");
        printf("4. Search Report by ID\n");
        printf("5. View All Reports\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1: addReport(); break;
            case 2: updateReport(); break;
            case 3: deleteReport(); break;
            case 4: searchReport(); break;
            case 5: viewAll(); break;
            case 6: saveData(); exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Load data from file
void loadData() {
    FILE *fp = fopen("reports.db", "rb");
    if (fp == NULL) return;
    fread(&count, sizeof(int), 1, fp);
    fread(reports, sizeof(struct Report), count, fp);
    fclose(fp);
}

// Save data to file
void saveData() {
    FILE *fp = fopen("reports.db", "wb");
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(reports, sizeof(struct Report), count, fp);
    fclose(fp);
}

// Add new pothole report
void addReport() {
    if (count >= MAX) {
        printf("Database full! Cannot add more reports.\n");
        return;
    }

    struct Report r;
    r.id = (count == 0) ? 1 : reports[count - 1].id + 1;

    printf("Enter location: ");
    fgets(r.location, 100, stdin);
    r.location[strcspn(r.location, "\n")] = '\0';

    printf("Enter description: ");
    fgets(r.description, 200, stdin);
    r.description[strcspn(r.description, "\n")] = '\0';

    reports[count++] = r;
    saveData();

    printf("Report added successfully! Report ID: %d\n", r.id);
}

// Update existing report
void updateReport() {
    int id, found = -1;
    printf("Enter Report ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (reports[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Report not found!\n");
        return;
    }

    printf("Enter new location: ");
    fgets(reports[found].location, 100, stdin);
    reports[found].location[strcspn(reports[found].location, "\n")] = '\0';

    printf("Enter new description: ");
    fgets(reports[found].description, 200, stdin);
    reports[found].description[strcspn(reports[found].description, "\n")] = '\0';

    saveData();
    printf("Report updated successfully!\n");
}

// Delete report
void deleteReport() {
    int id, found = -1;
    printf("Enter Report ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (reports[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Report not found!\n");
        return;
    }

    for (int i = found; i < count - 1; i++) {
        reports[i] = reports[i + 1];
    }

    count--;
    saveData();
    printf("Report deleted successfully!\n");
}

// Search report by ID
void searchReport() {
    int id;
    printf("Enter Report ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (reports[i].id == id) {
            printf("\n--- Report Found ---\n");
            printf("ID: %d\n", reports[i].id);
            printf("Location: %s\n", reports[i].location);
            printf("Description: %s\n", reports[i].description);
            return;
        }
    }

    printf("Report not found!\n");
}

// View all reports
void viewAll() {
    if (count == 0) {
        printf("No reports available.\n");
        return;
    }

    printf("\n--- All Pothole Reports ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nReport ID: %d\n", reports[i].id);
        printf("Location: %s\n", reports[i].location);
        printf("Description: %s\n", reports[i].description);
    }
}

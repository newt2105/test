void MedicalSystem::searchRecord() {
    system("cls");
    int choice;
    title();
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t1. Search by Record ID\n";
    cout << "\t\t\t\t2. Search by Patient ID\n";
    cout << "\t\t\t\t3. Search by Date\n";
    cout << "\t\t\t\t4. Search by Disease\n";
    cout << "\t\t\t\t5. Back to Main Menu\n";
    cout << "\n\n\n \n\t\t\t\tChoose from 1 to 5: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            string recordID;
            cout << "Enter record ID: ";
            cin.ignore();
            getline(cin, recordID);
            searchRecord(recordID); // Gọi hàm đã viết ở dưới để tìm kiếm theo recordID
            break;
        }
        case 2: {
            string patientID;
            cout << "Enter patient ID: ";
            cin.ignore();
            getline(cin, patientID);
            searchRecord(patientID); // Gọi hàm đã viết ở dưới để tìm kiếm theo patientID
            break;
        }
        case 3: {
            string date;
            cout << "Enter date: ";
            cin.ignore();
            getline(cin, date);
            searchRecord(date); // Gọi hàm đã viết ở dưới để tìm kiếm theo date
            break;
        }
        case 4: {
            string disease;
            cout << "Enter disease: ";
            cin.ignore();
            getline(cin, disease);
            searchRecord(disease); // Gọi hàm đã viết ở dưới để tìm kiếm theo disease
            break;
        }
        case 5:
            mainMenu();
            break;
        default:
            cout << "\t\t\tInvalid entry. Please enter the right option :)\n";
            cin.ignore();
            cin.get();
            searchRecord();
    }
}

void MedicalSystem::searchRecord(const string& recordID) {
    system("cls");
    bool found = false;

    for (const auto& record : records) {
        if (record.getRecordID() == recordID) {
            if (!found) {
                cout << "Records with record ID " << recordID << ":" << endl;
                cout << "----------------------" << endl;
                found = true;
            }
            cout << "Record ID: " << record.getRecordID() << ", Patient ID: " << record.getPatientID()
                << ", Patient Name: " << record.getPatientName() << ", Date: " << record.getDate()
                << ", Disease: " << record.getDisease() << endl;
        }
    }

    if (!found) {
        cout << "No records found for the given record ID." << endl;
    }
}

void MedicalSystem::searchRecord(const string& patientID) {
    system("cls");
    bool found = false;

    for (const auto& record : records) {
        if (record.getPatientID() == patientID) {
            if (!found) {
                cout << "Records for patient with ID " << patientID << ":" << endl;
                cout << "----------------------" << endl;
                found = true;
            }
            cout << "Record ID: " << record.getRecordID() << ", Patient ID: " << record.getPatientID()
                << ", Patient Name: " << record.getPatientName() << ", Date: " << record.getDate()
                << ", Disease: " << record.getDisease() << endl;
        }
    }

    if (!found) {
        cout << "No records found for the given patient ID." << endl;
    }
}

void MedicalSystem::searchRecord(const string& date) {
    system("cls");
    bool found = false;

    for (const auto& record : records) {
        if (record.getDate() == date) {
            if (!found) {
                cout << "Records with date " << date << ":" << endl;
                cout << "----------------------" << endl;
                found = true;
            }
            cout << "Record ID: " << record.getRecordID() << ", Patient ID: " << record.getPatientID()
                << ", Patient Name: " << record.getPatientName() << ", Date: " << record.getDate()
                << ", Disease: " << record.getDisease() << endl;
        }
    }

    if (!found) {
        cout << "No records found for the given date." << endl;
    }
}

void MedicalSystem::searchRecord(const string& disease) {
    system("cls");
    bool found = false;

    for (const auto& record : records) {
        if (record.getDisease() == disease) {
            if (!found) {
                cout << "Records with disease " << disease << ":" << endl;
                cout << "----------------------" << endl;
                found = true;
            }
            cout << "Record ID: " << record.getRecordID() << ", Patient ID: " << record.getPatientID()
                << ", Patient Name: " << record.getPatientName() << ", Date: " << record.getDate()
                << ", Disease: " << record.getDisease() << endl;
        }
    }

    if (!found) {
        cout << "No records found for the given disease." << endl;
    }
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    int ch = 0;
    while (ch != 8) //حلقة تكرار
        {

        system("cls");
        system("time /t"); system("date /t");

        cout << "========= SYSTEM-TOOL MENU ========" << endl;
        cout << "1. SHOW SYSTEM IDENTITY & OS" << endl;
        cout << "2. HARDWARES & CPU & GPU & DISK-DRIVE" << endl;
        cout << "3. MEMORY STATUS" << endl;
        cout << "4. SHOW NETWORK INFO" << endl;
        cout << "5. SHOW BOOT DETALIS" << endl;
        cout << "6. LOCALIZATION & TIME" << endl;
        cout << "7. SECURITY & VIRTUALIZATION" << endl;
        cout << "8. EXIT (CLOSE PROGRAM)" << endl;

        cout << ">> ENTER NUMBER : ";
        cin >> ch;
        cout << "====================================" << endl;

        switch (ch) {
        case 1:
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"OS Name\" /C:\"OS Version\" /C:\"Host Name\" /C:\"Product ID\" /C:\"OS Configuration\" /C:\"OS Build Type\" /C:\"Registered Owner\"");
            break;

        case 2:
            cout << "--- BASIC HARDWARE ---" << endl;
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"System Manufacturer\" /C:\"System Model\" /C:\"System Type\" /C:\"Processor(s)\" /C:\"BIOS Version\"");
            cout << "\n--- CPU-DETAILS ---" << endl;
            system("wmic cpu get Name, NumberOfCores, NumberOfLogicalProcessors /Format:list");
            cout << "\n--- GRAPHIC CARD (GPU) ---" << endl;
            system("wmic path win32_VideoController get Name");
            cout << "\n--- DISK-DRIVE DETAILS ---" << endl;
            system("wmic diskdrive get Model, Size, Status");
            break;

        case 3:
            cout << "--- PHYSICAL & VIRTUAL MEMORE ---" << endl;
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"Total Physical Memory\" /C:\"Available Physical Memory\" /C:\"Virtual Memory\" /C:\"Page File Location(s)\"");
            cout << "\n--- PHYSICAL RAM CHIPS ---" << endl;
            system("wmic memorychip get Capacity, Speed, DeviceLocator /Format:list");
            break;

        case 4:
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"Network Card(s)\" /C:\"Connection\" /C:\"IP address(es)\" /C:\"Domain\" /C:\"Logon Server\"");
            break;

        case 5:
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"System Boot Time\" /C:\"Original Install Date\" /C:\"Windows Directory\" /C:\"System Directory\" /C:\"Boot Device\"");
            break;

        case 6:
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"Time Zone\" /C:\"System Locale\" /C:\"Input Locale\"");
            break;

        case 7:
            system("C:\\Windows\\System32\\systeminfo.exe | C:\\Windows\\System32\\findstr.exe /C:\"Hotfix(s)\" /C:\"Hyper-V\"");
            break;

        case 8:
            cout << "GOODBYE!" << endl;
            break;

        default:
            cout << "WRONG NUMBER! SELECCT NUMBER BETWEEN (0 - 7)" << endl;
            cout << "NUMBER 8 FOR EXIT AND CLOSE PROGRAM." << endl;
            break;
        }

        //توقف الاداة قبل القودة الى القائمة الاساسية
        if (ch != 8) {
            cout << "============= FINISHED =============" << endl;
            system("pause");
        }
    }

    return 0;
}

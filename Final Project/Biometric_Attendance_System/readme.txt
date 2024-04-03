由於本專題會需要將 HTML 和 Database 一併燒錄進去 ESP32，所以要使用會需要額外的步驟

先到 https://github.com/me-no-dev/arduino-esp32fs-plugin/releases 下載 ESP32FS-1.1.zip
將該插件解壓縮後放置到 Arduino 的路徑，看起來應該像這樣 "C:\Users\Username\Documents\Arduino\tools\ESP32FS\tool\esp32fs.jar"
重開 Arduino IDE 即可以在工具一欄看見 ESP32 Sketch Data Upload

開啟 Biometric_Attendance_System.ino
先點擊 ESP32 Sketch Data Upload 上傳其他所需的檔案
上傳完成後則正式編譯並燒錄代碼
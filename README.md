# 📘 CapsLayoutSwitcher

[English](#english) | [Русский](#русский)

---

##  English

### Overview

**CapsLayoutSwitcher** is a lightweight C++ utility that makes keyboard layout switching intuitive and efficient.

### 🔧 Features

- Switches keyboard layout by pressing **Caps Lock**
- Activates **Caps Lock** only when pressing **Caps Lock + Shift**
- Minimal resource usage
- Runs silently in the background

### ▶️ Usage

To use CapsLayoutSwitcher:

1. **Download the latest release** from the [Releases](https://github.com/shushey/CapsLayoutSwitcher/releases) section  
2. **Add the program to startup** so it runs automatically:
   - Use **Task Scheduler** to run the program with **administrator privileges**
   - Or place a shortcut in the **Startup folder** (`shell:startup`)

### 📅 Task Scheduler Setup

1. Press `Win + R`, type `taskschd.msc`, and press Enter  
2. In the left panel, select **Task Scheduler Library**  
3. In the right panel, click **Create Task** (not Basic Task)  
4. In the **General** tab:
   - Name: `CapsLayoutSwitcher`
   - Check **Run with highest privileges**
   - Configure for: your Windows version  
5. Go to the **Triggers** tab → click **New...**
   - Begin the task: **At log on**
   - Specific user: your username  
6. Go to the **Actions** tab → click **New...**
   - Action: **Start a program**
   - Program/script: path to `CapsLayoutSwitcher.exe`, e.g.:  
     `C:\Programs\CapsLayoutSwitcher\CapsLayoutSwitcher.exe`  
7. Click **OK** to save the task  
8. Reboot or log out to test

---

## Русский

### Обзор

**CapsLayoutSwitcher** — легковесная утилита на C++, делающая переключение раскладки клавиатуры удобным и интуитивным.

### 🔧 Возможности

- Переключает раскладку клавиатуры по нажатию **Caps Lock**
- Включает **Caps Lock** только при сочетании **Caps Lock + Shift**
- Минимальное потребление ресурсов
- Работает в фоне, не мешая другим приложениям

### ▶️ Использование

Чтобы использовать CapsLayoutSwitcher:

1. **Скачайте последнюю версию** из раздела [Releases](https://github.com/shushey/CapsLayoutSwitcher/releases)  
2. **Добавьте программу в автозагрузку**, чтобы она запускалась автоматически:
   - Используйте **Планировщик заданий**, чтобы запускать программу **от имени администратора**
   - Либо поместите ярлык в папку **Автозагрузка** (`shell:startup`)

### 📅 Настройка через Планировщик заданий

1. Нажмите `Win + R`, введите `taskschd.msc` и нажмите Enter  
2. В левой панели выберите **Библиотека планировщика заданий**  
3. В правой панели нажмите **Создать задачу** (не "Простая задача")  
4. На вкладке **Общие**:
   - Название: `CapsLayoutSwitcher`
   - Установите галочку **Выполнять с наивысшими правами**
   - Настроить для: вашей версии Windows  
5. Перейдите на вкладку **Триггеры** → нажмите **Создать...**
   - Начать задачу: **При входе в систему**
   - Конкретный пользователь: ваше имя  
6. Перейдите на вкладку **Действия** → нажмите **Создать...**
   - Действие: **Запуск программы**
   - Программа/скрипт: путь к `CapsLayoutSwitcher.exe`, например:  
     `C:\Programs\CapsLayoutSwitcher\CapsLayoutSwitcher.exe`  
7. Нажмите **OK**, чтобы сохранить задачу  
8. Перезагрузите компьютер или выйдите из системы для проверки


# Лабораторная работа 1

Приложение "Управление Учётными данными" представляет собой инструмент для безопасного хранения и управления учётными данными, такими как логины и пароли для различных онлайн-ресурсов. Пользовательский интерфейс приложения включает в себя окно аутентификации, где пользователь должен ввести пин-код (мастер-пароль) для доступа к учётным данным. После успешной аутентификации отображается окно, содержащее список учётных данных, включающее URL сайтов, логины и пароли. Для удобства пользователей предусмотрена возможность фильтрации учётных записей по названию сайта. Учётные данные защищены двойным слоем шифрования. Первый слой шифрования применяется к файлу учётных данных с использованием алгоритма AES-256. Ключ шифрования генерируется на основе пин-кода пользователя с использованием криптостойкой функции хеширования SHA-256. Расшифрованные данные хранятся только в оперативной памяти приложения и никогда не сохраняются на диске. Дополнительно, после расшифровки файла учётные данные хранятся в памяти в зашифрованном виде с помощью второго слоя шифрования. Это обеспечивает дополнительный уровень защиты от компрометации данных в случае доступа к оперативной памяти устройства. Приложение "Управление Учётными данными" обеспечивает надёжное хранение и безопасное использование учётных данных, обеспечивая конфиденциальность и защиту от несанкционированного доступа к личной информации пользователей. Реализовано добавление, удаление и копирование записей при сохранении

### Экран авторизации
![image](https://github.com/f1xgun/221-3210_Mikhailov_MMCS/assets/88651829/ee801b58-03ae-4ae6-b4a6-9d684bb45541)
### Экран с записями
![image](https://github.com/f1xgun/221-3210_Mikhailov_MMCS/assets/88651829/39bd1f1d-e6e3-4013-bd7b-434ecdfefd0e)
### Диалоговое окно для создания записи
![image](https://github.com/f1xgun/221-3210_Mikhailov_MMCS/assets/88651829/180b4133-23b4-4b70-8c28-fed7a7668060)

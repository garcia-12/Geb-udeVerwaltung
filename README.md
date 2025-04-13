```markdown
# 🏢 GebäudeVerwaltung – Verwaltung von Gebäuden, Wohnungen & Zimmern in C++

Willkommen zu meinem zweiten C++-Projekt, diesmal ganz im Zeichen der Architektur 🧱  
Dieses Programm simuliert ein einfaches System zur Verwaltung von Gebäuden, Wohnungen und Zimmern – ganz objektorientiert, ganz sauber, ganz charmant 😌.

## 🚀 Was macht dieses Projekt?

Mit diesem Tool kannst du ein Gebäude als Datenstruktur aufbauen, Wohnungen hinzufügen und Zimmer verwalten.  
Es zeigt, wie man mit Klassenhierarchien, Vererbung und Komposition in C++ ein realitätsnahes Modell erstellt.

## 🧠 Features

- Verwaltung von Gebäuden mit mehreren Wohnungen und Zimmern  
- Ausgabe der Informationen über alle Einheiten  
- Flexible Struktur für Erweiterungen (z. B. Bewohner, Mietpreise etc.)  
- Saubere Trennung der Logik in Header- und Source-Dateien

## 🛠️ Projektstruktur

```
Geb-udeVerwaltung/
├── main.cpp              # Einstiegspunkt
├── Gebaeude.cpp/.h       # Klasse für das Gebäude
├── Wohnung.cpp/.h        # Klasse für die Wohnungen
├── Zimmer.cpp/.h         # Klasse für Zimmer
├── CMakeLists.txt        # Build-Konfiguration für CMake
```

## 🧪 Kompilierung & Ausführung

### Voraussetzungen

- Ein C++ Compiler (z. B. `g++` oder `clang++`)  
- [CMake](https://cmake.org/) installiert

### Schritte

```bash
cd Geb-udeVerwaltung
mkdir build && cd build
cmake ..
make
./GebaeudeVerwaltung  # Oder der entsprechende Binary-Name
```

## 👨‍🎓 Über mich

Ich bin Informatikstudent mit Leidenschaft für C++ und React.js.  
Ich code nicht nur, um zu funktionieren – ich code, um zu gestalten 💡.  
Jedes Projekt ist ein Lernschritt, jedes Commit ein kleines Stück Zukunft.

## ✨ Mögliche Erweiterungen

- Bewohnerverwaltung  
- Mietkostenberechnung  
- Visuelle Darstellung mit Qt oder SFML  
- JSON-Speicherung für langfristige Nutzung
„Ein gutes Programm ist wie ein gut gebautes Haus – stabil im Fundament, flexibel im Ausbau.“


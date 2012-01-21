# Teil 1: Optionen
include_dateien = [                         # wo wird nach .h Dateien gesucht?
  '.',                                      # im lokalen Verzeichnis
  './header'
]
cpp_standard    = [                         # Angaben zum Standard
  '-std=c++98',                             # c99
  '-pedantic'                               # keine Erweiterungen zulaessig
]
warnungen       = [                         # Einstellungen zu Warnungen
  '-Wall',                                  # viel meckern
  '-Wextra',                                # extra viel meckern
  '-Werror'                                 # Warnungen sind Fehler
]

# Teil 2: Definitionen des Environments
std = Environment(
  CXXFLAGS  = cpp_standard + warnungen,
  CCPPATH   = include_dateien
)

# Teil 3: Programm bauen
cpp_dateien     = [                         # hier C++-Dateien einfuegen
  'adresse.cpp',
  'angestellter.cpp',
  'ausgabe.cpp',
  'beschreibbar.cpp',
  'datei_handler.cpp',
  'datum.cpp',
  'eingabe.cpp',
  'email_adresse.cpp',
  'helfer.cpp',
  'main.cpp',
  'mensch.cpp',
  'name.cpp',
  'ort.cpp',
  'person.cpp',
  'professor.cpp',
  'sprechstunde.cpp',
  'student.cpp',
  'telefonnummer.cpp',
  'uni_verwaltung.cpp',
  'zeit.cpp',
  'zufallsgenerierung.cpp'
]
programm_name = 'uni_verwaltung'             # hier Programmnamen festlegen
std.Program(programm_name, cpp_dateien)    # Programm bauen

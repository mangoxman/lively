lively_sources = [
  'main.c',
  'lively-application.c',
  'lively-window.c',
]

lively_deps = [
  dependency('gtk4'),
]

lively_sources += gnome.compile_resources('lively-resources',
  'lively.gresource.xml',
  c_name: 'lively'
)

executable('lively', lively_sources,
  dependencies: lively_deps,
       install: true,
)

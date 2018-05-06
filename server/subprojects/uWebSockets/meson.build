project('uWebSockets', 'cpp')

openssl_dep = dependency('openssl')
zlib_dep = dependency('zlib')

subdir('include')
subdir('src')

dep = declare_dependency(include_directories : inc, link_with : lib,
                         dependencies : [openssl_dep, zlib_dep])

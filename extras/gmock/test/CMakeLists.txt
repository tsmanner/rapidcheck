add_executable(rapidcheck_gmock_tests main.cpp)
target_link_libraries(rapidcheck_gmock_tests
  rapidcheck_gmock
  rapidcheck_catch
  Catch2::Catch2
  gmock)
target_include_directories(rapidcheck_gmock_tests PRIVATE 
    ${CMAKE_SOURCE_DIR}/ext/googletest/googletest/include
    ${CMAKE_SOURCE_DIR}/ext/googletest/googlemock/include)

# Prevent collision between Gmock and Catch
target_compile_definitions(rapidcheck_gmock_tests PRIVATE
  CATCH_CONFIG_PREFIX_ALL)

add_test(
  NAME rapidcheck_gmock_tests
  COMMAND rapidcheck_gmock_tests)

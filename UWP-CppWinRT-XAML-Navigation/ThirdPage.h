#pragma once

#include "ThirdPage.g.h"

namespace winrt::UWP_CppWinRT_XAML_Navigation::implementation
{
    struct ThirdPage : ThirdPageT<ThirdPage>
    {
        ThirdPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::UWP_CppWinRT_XAML_Navigation::factory_implementation
{
    struct ThirdPage : ThirdPageT<ThirdPage, implementation::ThirdPage>
    {
    };
}

open ReactNative;
open ReactNavigation;
open GlobalStyle;

[@react.component]
let make = (~navigation: Navigation.t) => {
let _signInAsync = () => {
    Js.Promise.
    (
        AsyncStorage.setItem("userToken", "abc")
        |> then_(_result =>
            resolve(navigation->Navigation.navigate("App"))
            )
    );
};
<View style=styles##container>
    <Button title="Sign in!" onPress={_ => _signInAsync() |> ignore} />
</View>;
};
make->NavigationOptions.setNavigationOptions(
NavigationOptions.t(~title="Please sign in", ()),
);
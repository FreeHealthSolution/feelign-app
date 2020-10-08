open ReactNative;
open ReactNavigation;
open GlobalStyle;

[@react.component]
  let make = (~navigation: Navigation.t) => {
    // Fetch the token from storage then navigate to our appropriate place
    let _bootstrapAsync = () => {
      AsyncStorage.getItem("userToken")
      |> Js.Promise.then_(stringOrNull => {
           // This will switch to the App screen or Auth screen and this loading screen will be unmounted and thrown away.

           Js.log2("CHECKING_AUTH_TOKEN", stringOrNull);
           switch (Js.Null.toOption(stringOrNull)) {
           | None =>
             Js.Promise.resolve(navigation->Navigation.navigate("Auth"))
           | Some(_stringOrNull) =>
             Js.Promise.resolve(navigation->Navigation.navigate("App"))
           };
         });
    };
    React.useEffect(() => {
      _bootstrapAsync() |> ignore;
      None;
    });
    <View style=styles##container>
      <ActivityIndicator />
      <StatusBar barStyle=`default />
    </View>;
  };
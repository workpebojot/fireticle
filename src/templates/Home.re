let str = React.string;
let logo: string = [%raw "require('../assets/images/logo.png')"];

[@react.component]
let make = () =>
  <div className="h-screen flex justify-center items-center">
    <div className="max-w-sm rounded overflow-hidden shadow-lg p-4">
      <img className="w-full" src=logo alt="Sunset in the mountains" />
      <div className="px-6 py-4">
        <div className="font-bold text-xl mb-2"> {"RE-Tailwind" |> str} </div>
        <p className="text-gray-700 text-base">
          {"A reason react starter with tailwind" |> str}
        </p>
      </div>
      <div className="px-6 py-4">
        {[|"Reason React", "Tailwind"|]
         |> Array.map(tag =>
              <span
                key=tag
                className="inline-block bg-gray-200 rounded-full px-3 py-1 text-sm font-semibold text-gray-700 mr-2 mt-2">
                {"#" ++ tag |> str}
              </span>
            )
         |> React.array}
      </div>
    </div>
  </div>;

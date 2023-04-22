{
  description = "dwmblocks";

  inputs = {
    nixpkgs.url = "nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }: {
    packages.x86_64-linux.default = 
      with import nixpkgs { system = "x86_64-linux"; };
      stdenv.mkDerivation {
        src = self;
        name = "dwmblocks";
        buildInputs = with nixpkgs; [ xorg.libX11 pkg-config ];
        makeFlags = [ "PREFIX=$(out)" ];
      };
  };
}

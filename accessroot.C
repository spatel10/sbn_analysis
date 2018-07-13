{
/*
c1 = new TCanvas();
nu_energy->SetTitle("Neutrino Energy;Energy(GeV);Counts/0.1Gev");
nu_energy->Draw();

c2 = new TCanvas();
nu_mode_type->SetTitle("Mode of Neutrino Interaction;Mode;Counts");
nu_mode_type->Draw();
*/

c3 = new TCanvas();
decay_parent->SetTitle("Parent Decay Mode (Stacked);Energy(Gev);Counts/0.1Gev");
decay_parent->Draw();

legend = new TLegend(0.6, 0.6, 0.9, 0.9);
legend->AddEntry("nu_parent_13", "#pi^{+} #rightarrow #nu_{#mu} + #mu^{+}", "f");
legend->AddEntry("nu_parent_5", "K^{+} #rightarrow #nu_{#mu} + #mu^{+}", "f");
legend->AddEntry("nu_parent_14", "#pi^{-} #rightarrow #bar{#nu_{#mu}} + #mu^{-}", "f");
legend->AddEntry("nu_parent_11", "#mu^{+} #rightarrow #bar{#nu_{#mu}} + #nu_{e} + e^{-}", "f");
legend->AddEntry("nu_parent_else", "Otherwise", "f");
legend->Draw();


}

